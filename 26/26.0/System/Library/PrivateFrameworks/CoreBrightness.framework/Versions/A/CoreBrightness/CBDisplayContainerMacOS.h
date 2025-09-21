@class NSString, NSMutableArray;
@protocol CBContainerModuleProtocol;

@interface CBDisplayContainerMacOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol> {
    unsigned long long _deviceID;
    unsigned long long _aliasID;
    NSMutableArray *_relevantServices;
    NSMutableArray<CBContainerModuleProtocol> *_modules;
    BOOL _builtIn;
    unsigned long long _vendorID;
    unsigned long long _productID;
    unsigned long long _serialNumber;
    struct IONotificationPort { } *_hidDisplayServicePublishedNotifyPort;
    unsigned int _hidDisplayServiceIterator;
    BOOL _brightnessDisabled;
    BOOL _autoBrightnessDisabled;
}

@property (readonly) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)start;
- (void)dealloc;
- (void)stop;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithID:(unsigned long long)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyContainerPropertyForKey:(id)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1 from:(id)a2;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)setupInternalModules;
- (BOOL)tearDownInternalModules;

@end
