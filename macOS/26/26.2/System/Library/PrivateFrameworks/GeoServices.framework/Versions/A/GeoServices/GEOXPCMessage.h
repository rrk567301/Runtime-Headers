@class NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCMessage : NSObject {
    NSObject<OS_xpc_object> *_object;
}

@property (class, readonly, nonatomic) NSString *messageName;

+ (BOOL)canDecodeFromXPCDictionary:(id)a0;
+ (id)decodeFromXPCDictionary:(id)a0 error:(id *)a1;

- (void)send:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)description;
- (id)_prepareMessage;
- (BOOL)sendSync:(id)a0 error:(id *)a1;

@end
