@class NSURL, NSData;

@interface ISStoreIndex : NSObject {
    NSData *_data;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    NSData *_entryData;
}

@property (readonly) NSURL *indexFileURL;
@property (readonly) NSData *data;
@property (readonly) struct os_unfair_lock_s { unsigned int x0; } *dataLock;

- (void)invalidate;
- (void)enumerateValuesWithBock:(id /* block */)a0;
- (BOOL)validate;
- (id)description;
- (id)data;
- (id)_internalData;
- (void).cxx_destruct;
- (void)_internalSetData:(id)a0;
- (void)enumerateValuesForUUID:(unsigned char[16])a0 bock:(id /* block */)a1;
- (id)initWithStoreFileURL:(id)a0;

@end
