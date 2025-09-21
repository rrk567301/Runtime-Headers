@class NSString, NSArray, NSSet;

@interface ATXInformationHeuristicResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *heuristicName;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSSet *refreshTriggers;
@property (readonly, nonatomic) char hasFailed;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_safeDecodeObjectOfClass:(Class)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(char)a3;
- (id)_safeDecodeObjectOfClasses:(id)a0 forKey:(id)a1 withCoder:(id)a2 nonNull:(char)a3;
- (id)initWithHeuristicName:(id)a0 suggestions:(id)a1 refreshTriggers:(id)a2 hasFailed:(char)a3;

@end
