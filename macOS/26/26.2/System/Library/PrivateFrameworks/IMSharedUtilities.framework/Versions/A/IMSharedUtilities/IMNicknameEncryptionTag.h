@class NSData, NSString;

@interface IMNicknameEncryptionTag : NSObject

@property (retain, nonatomic) NSData *dataRepresentation;
@property (readonly, nonatomic) NSString *stringRepresentation;

+ (id)_tagWithDataRepresentation:(id)a0 length:(unsigned long long)a1 error:(id *)a2;
+ (id)_tagWithStringRepresentation:(id)a0 length:(unsigned long long)a1 error:(id *)a2;

- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToTag:(id)a0 error:(id *)a1;

@end
