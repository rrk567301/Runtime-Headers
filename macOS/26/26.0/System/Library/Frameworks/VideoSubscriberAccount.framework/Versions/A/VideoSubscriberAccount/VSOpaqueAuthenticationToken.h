@class NSString, NSData, NSDate;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken>

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSData *serializedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOpaque;
- (BOOL)isValid;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSerializedData:(id)a0;
- (BOOL)isFromUnsupportedProvider;

@end
