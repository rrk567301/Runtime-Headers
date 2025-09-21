@class NSUUID;

@interface ICTTTodo : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) char done;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)serialize;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithIdentifier:(id)a0 done:(char)a1;
- (id)todoWithDone:(char)a0;

@end
