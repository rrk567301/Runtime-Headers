@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) CNContact *primaryUser;

+ (char)jsonDataOptional;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)_stringValueFromDictionary:(id)a0 key:(id)a1 isOptional:(char)a2;

@end
