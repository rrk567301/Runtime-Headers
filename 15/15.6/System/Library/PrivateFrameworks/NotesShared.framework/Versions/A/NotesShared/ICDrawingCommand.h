@class ICDrawingCommandData, NSUUID;

@interface ICDrawingCommand : NSObject

@property (readonly, nonatomic) ICDrawingCommandData *data;
@property (readonly, nonatomic) char hidden;
@property (readonly, nonatomic) struct TopoID { NSUUID *replicaID; unsigned int clock; } timestamp;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithArchive:(const void *)a0 version:(unsigned int)a1 sortedUUIDs:(id)a2;
- (id)initWithCommand:(id)a0 hidden:(char)a1 timestamp:(struct TopoID { id x0; unsigned int x1; })a2;
- (char)isEqualDrawingCommand:(id)a0;
- (unsigned int)saveToArchive:(void *)a0 sortedUUIDs:(id)a1 withPathData:(char)a2;

@end
