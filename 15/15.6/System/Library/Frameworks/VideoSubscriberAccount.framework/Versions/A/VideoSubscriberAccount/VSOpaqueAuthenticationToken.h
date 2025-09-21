@class NSString, NSData, NSDate;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken>

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSData *serializedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (char)isValid;
- (void).cxx_destruct;
- (char)isOpaque;
- (id)initWithSerializedData:(id)a0;
- (char)isFromUnsupportedProvider;

@end
