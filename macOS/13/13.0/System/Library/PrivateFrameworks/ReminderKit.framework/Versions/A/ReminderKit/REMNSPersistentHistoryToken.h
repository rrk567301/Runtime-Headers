@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (long long)compareToken:(id)a0 error:(id *)a1;
- (id)initWithPersistentHistoryToken:(id)a0;

@end
