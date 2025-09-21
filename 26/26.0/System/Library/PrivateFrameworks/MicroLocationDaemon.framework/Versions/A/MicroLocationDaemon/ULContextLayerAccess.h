@class NSUUID, NSSet;

@interface ULContextLayerAccess : NSObject

@property (retain, nonatomic) NSUUID *writer;
@property (retain, nonatomic) NSSet *readers;

- (void).cxx_destruct;
- (id)initWithSingleAccess:(id)a0;
- (id)initWithWriter:(id)a0 readers:(id)a1;

@end
