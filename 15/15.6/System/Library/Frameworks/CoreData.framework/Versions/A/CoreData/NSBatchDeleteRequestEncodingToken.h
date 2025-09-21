@class NSData;

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *fetchData;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) char secure;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForRequest:(id)a0;

@end
