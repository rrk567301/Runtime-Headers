@class BKSHIDEventDeferringChangeBasis, NSString, BKSHIDEventDeferringSelectionTarget;
@protocol BKSHIDEventDeferringSelectionPathSymbol;

@interface BKSHIDEventDeferringSelectionChangeRequest : NSObject <NSSecureCoding, BSDescriptionStreaming, NSCopying, NSMutableCopying> {
    id<BKSHIDEventDeferringSelectionPathSymbol> _pathIdentifier;
    BKSHIDEventDeferringSelectionTarget *_selectionTarget;
    BKSHIDEventDeferringChangeBasis *_basis;
    double _timestamp;
    BOOL _ignoreModalities;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BKSHIDEventDeferringSelectionPathSymbol> pathIdentifier;
@property (readonly, nonatomic) BKSHIDEventDeferringSelectionTarget *selectionTarget;
@property (readonly, nonatomic) BKSHIDEventDeferringChangeBasis *basis;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL ignoreModalities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)build:(id /* block */)a0;
+ (id)new;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToStream:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
