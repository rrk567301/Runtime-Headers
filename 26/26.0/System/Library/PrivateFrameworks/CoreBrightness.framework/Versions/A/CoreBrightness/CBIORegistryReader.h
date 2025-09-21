@class NSString;

@interface CBIORegistryReader : NSObject <CBIORegInterface> {
    unsigned int _options;
    char _plane[128];
}

@property (readonly) unsigned int service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerWithService:(unsigned int)a0;
+ (id)readerWithService:(unsigned int)a0 andOptions:(unsigned int)a1;
+ (id)readerWithService:(unsigned int)a0 andPlane:(char[128])a1;
+ (id)readerWithService:(unsigned int)a0 andPlane:(char[128])a1 andOptions:(unsigned int)a2;

- (id)initWithService:(unsigned int)a0;
- (void)dealloc;
- (id)copyProperty:(id)a0;
- (id)initWithService:(unsigned int)a0 andOptions:(unsigned int)a1;
- (id)initWithService:(unsigned int)a0 andPlane:(char[128])a1;
- (id)initWithService:(unsigned int)a0 andPlane:(char[128])a1 andOptions:(unsigned int)a2;

@end
