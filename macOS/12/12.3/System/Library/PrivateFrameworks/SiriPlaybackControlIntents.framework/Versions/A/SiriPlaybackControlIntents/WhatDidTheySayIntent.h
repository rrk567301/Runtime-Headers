@class NSArray, NSDate, Device;

@interface WhatDidTheySayIntent : INIntent

@property (nonatomic, retain) Device *device;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, copy) NSDate *startTime;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end
