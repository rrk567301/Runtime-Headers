@class NSPersistentHistoryToken;

@interface REMNSPersistentHistoryToken : REMChangeToken

@property (readonly, nonatomic) NSPersistentHistoryToken *token;

+ (BOOL)supportsSecureCoding;

- (long long)compareToken:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithPersistentHistoryToken:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
