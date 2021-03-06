/**
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *  https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

/// the Stream class defines a standard for storing information about a video stream that will be
/// passed by reference. Different types of stream will be defined as subclasses of this base.
@interface Stream : NSObject

@property(nonatomic, nonnull) NSString *name;
@property(nonatomic, nullable) NSString *APIKey;

- (instancetype) initWithName:(nonnull NSString *)name
                       APIKey:(nullable NSString *)APIKey;

- (instancetype)initWithName:(nonnull NSString *)name;

@end
