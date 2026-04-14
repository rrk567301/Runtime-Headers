@class NSData;

@interface CHTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long transactionType;
@property (readonly, nonatomic) NSData *record;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)toString:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)initWithString:(id)a0 andRecord:(id)a1;
- (id)initWithType:(unsigned long long)a0 andRecord:(id)a1;
- (BOOL)isEqualToTransaction:(id)a0;

@end
