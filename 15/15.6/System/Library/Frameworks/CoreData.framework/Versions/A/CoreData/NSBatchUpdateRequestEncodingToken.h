@class NSString, NSPredicate, NSDictionary;

@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *entityName;
@property (readonly, retain, nonatomic) NSPredicate *predicate;
@property (readonly, retain, nonatomic) NSDictionary *columnsToUpdate;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) long long nullValueCount;
@property (readonly, nonatomic) char includeSubEntities;
@property (readonly, nonatomic) char secure;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForRequest:(id)a0;

@end
