@class NSArray, NSDate;

@interface FCNotificationPool : NSObject <NSCopying>

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSDate *creationDate;

+ (BOOL)canReadPoolAtURL:(id)a0;

- (id)initWithItems:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithItems:(id)a0 creationDate:(id)a1;

@end
