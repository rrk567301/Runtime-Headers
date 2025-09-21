@interface DMAppleRAID : NSObject {
    id _instPriv;
}

- (void)dealloc;
- (id)init;
- (id)initWithManager:(id)a0;
- (id)DADiskToUUID:(struct __DADisk { } *)a0 lookupMembers:(char)a1 lookupSpares:(char)a2;
- (id)childrenOfRAID:(struct __DADisk { } *)a0;
- (id)DADiskToUUID:(struct __DADisk { } *)a0;
- (struct __DADisk { } *)UUIDToDADisk:(id)a0;
- (int)addToRAIDSet:(struct __DADisk { } *)a0 newDisk:(struct __DADisk { } *)a1 type:(id)a2;
- (int)addToRAIDSetUUID:(id)a0 newDisk:(struct __DADisk { } *)a1 type:(id)a2;
- (int)createRAIDSetWithDisks:(id)a0 setType:(id)a1 name:(id)a2 format:(id)a3 options:(id)a4;
- (int)deleteRAIDSet:(struct __DADisk { } *)a0;
- (int)deleteRAIDSetUUID:(id)a0;
- (id)directRAIDLevelForSet:(struct __DADisk { } *)a0;
- (id)directRAIDLevelForSetUUID:(id)a0;
- (int)enableRAIDSetWithDisk:(struct __DADisk { } *)a0 setType:(id)a1 options:(id)a2;
- (char)isRAIDMember:(struct __DADisk { } *)a0;
- (char)isRAIDSet:(struct __DADisk { } *)a0;
- (id)raidMembers:(id)a0 returnMembers:(char)a1 returnSpares:(char)a2 master:(id *)a3;
- (int)removeFromRAIDSet:(struct __DADisk { } *)a0 disk:(struct __DADisk { } *)a1;
- (int)removeFromRAIDSetUUID:(id)a0 memberUUID:(id)a1;
- (int)repairRAIDSet:(struct __DADisk { } *)a0 newDisk:(struct __DADisk { } *)a1;
- (int)repairRAIDSetUUID:(id)a0 newDisk:(struct __DADisk { } *)a1;
- (int)updateRAIDSetParameters:(struct __DADisk { } *)a0 setKey:(id)a1 value:(id)a2;

@end
