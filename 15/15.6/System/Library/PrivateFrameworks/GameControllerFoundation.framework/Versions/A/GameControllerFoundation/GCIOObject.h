@class NSString;

@interface GCIOObject : NSObject <GCIOObject> {
    unsigned int _port;
}

@property (class, readonly) NSString *className;

@property (readonly) NSString *className;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (char)conformsTo:(const char *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (id)redactedDescription;
- (char)isEqualTo:(id)a0;
- (id)initWithPort:(unsigned int)a0 error:(id *)a1;

@end
