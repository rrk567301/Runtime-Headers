@class NSString;
@protocol MFScriptingMessage;

@interface MFMessageAddressee : NSObject {
    NSString *_displayName;
    NSString *_address;
}

@property (readonly, copy, nonatomic) NSString *type;
@property (retain, nonatomic) id<MFScriptingMessage> message;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *address;
@property (readonly, copy, nonatomic) NSString *formattedAddress;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)objectSpecifier;
- (id)initWithDisplayName:(id)a0 address:(id)a1 type:(id)a2 message:(id)a3;

@end
