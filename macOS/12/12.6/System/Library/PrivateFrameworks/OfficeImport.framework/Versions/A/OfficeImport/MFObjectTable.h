@class NSMutableArray;

@interface MFObjectTable : NSObject {
    NSMutableArray *m_objects;
}

@property unsigned int maximumSize;

- (int)size;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (int)deleteObject:(unsigned int)a0;
- (unsigned int)insertPos;
- (int)selectInto:(int)a0 io_DC:(id)a1;
- (int)putObject:(id)a0 in_objectPos:(unsigned int)a1;
- (id)getObject:(unsigned int)a0;

@end
