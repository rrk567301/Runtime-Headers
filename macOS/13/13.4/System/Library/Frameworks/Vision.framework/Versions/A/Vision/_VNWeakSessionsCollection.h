@class NSMutableArray;

@interface _VNWeakSessionsCollection : NSObject {
    NSMutableArray *_weakSessionWrappers;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSession:(id)a0 droppingWeakZeroedObjects:(BOOL)a1;
- (id)allSessionsDroppingWeakZeroedObjects:(BOOL)a0;

@end
