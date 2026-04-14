@class NSString, NSDictionary, NSData, NSNumber;

@interface CRChallengeResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *componentType;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *signedResponse;
@property (retain, nonatomic) NSNumber *keyIndex;
@property (retain, nonatomic) NSDictionary *properties;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithComponentType:(id)a0 identifier:(id)a1 signedResponse:(id)a2 keyIndex:(id)a3 properties:(id)a4;

@end
