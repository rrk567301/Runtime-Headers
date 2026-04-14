@class NSArray, NSMutableSet;

@interface HMUserListeningHistoryUpdateControl : NSObject <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessories:(id)a0;

@end
