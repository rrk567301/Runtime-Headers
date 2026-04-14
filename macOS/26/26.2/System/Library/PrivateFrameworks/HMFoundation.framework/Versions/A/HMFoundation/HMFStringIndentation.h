@interface HMFStringIndentation : HMFObject

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long level;

+ (id)indentation;
+ (id)indentationWithWidth:(unsigned long long)a0;

- (id)indentationByLevels:(long long)a0;
- (id)description;
- (id)initWithWidth:(unsigned long long)a0;
- (id)init;

@end
