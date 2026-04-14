@class NSString, NSData;

@interface IMNicknameEncryptionPlainRecordField : NSObject

@property (retain, nonatomic) NSString *fieldName;
@property (retain, nonatomic) NSData *plainData;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFieldName:(id)a0 plainData:(id)a1;

@end
