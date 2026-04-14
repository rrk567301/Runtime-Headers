@class NSString, NSUUID, SFLBookmark, NSDictionary;
@protocol SFLInternalItem;

@interface SFLItem : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) id<SFLInternalItem> internalItem;
@property (retain) id _internalItem;
@property (retain) NSString *listIdentifier;
@property (readonly) NSUUID *identifier;
@property (copy) NSString *name;
@property (copy) SFLBookmark *bookmark;
@property (copy) NSDictionary *properties;
@property (readonly) unsigned long long seed;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)_cfTypeID;
- (void).cxx_destruct;
- (void)setSeed:(unsigned long long)a0;
- (id)initWithInternalItem:(id)a0;
- (id)initWithName:(id)a0 URL:(id)a1 properties:(id)a2;
- (id)initWithName:(id)a0 bookmarkData:(id)a1 properties:(id)a2;
- (void)_performLocked:(id /* block */)a0;

@end
