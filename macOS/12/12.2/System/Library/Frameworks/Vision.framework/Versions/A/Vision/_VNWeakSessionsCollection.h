@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;

@end
