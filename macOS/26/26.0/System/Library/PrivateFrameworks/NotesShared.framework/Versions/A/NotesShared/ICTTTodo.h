@class NSUUID;

@interface ICTTTodo : NSObject <NSCopying>

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL done;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)serialize;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithIdentifier:(id)a0 done:(BOOL)a1;
- (id)todoWithDone:(BOOL)a0;

@end
