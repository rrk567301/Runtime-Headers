@class NSString, NSArray;

@interface GDKnosisResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *kgq;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, copy, nonatomic) NSArray *answers;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuery:(id)a0 kgq:(id)a1 status:(unsigned long long)a2 answers:(id)a3;

@end
