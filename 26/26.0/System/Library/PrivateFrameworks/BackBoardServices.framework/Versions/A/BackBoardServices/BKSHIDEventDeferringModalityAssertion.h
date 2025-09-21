@class BKSHIDEventDeferringSelectionTarget, BKSHIDEventDeferringChangeBasis, NSString, BKSHIDEventDeferringModality;
@protocol BKSHIDEventDeferringSelectionPathSymbol;

@interface BKSHIDEventDeferringModalityAssertion : NSObject <NSSecureCoding, BSDescriptionStreaming, NSCopying, NSMutableCopying> {
    id<BKSHIDEventDeferringSelectionPathSymbol> _pathIdentifier;
    BKSHIDEventDeferringSelectionTarget *_selectionTarget;
    BKSHIDEventDeferringModality *_modality;
    BKSHIDEventDeferringChangeBasis *_basis;
    double _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<BKSHIDEventDeferringSelectionPathSymbol> pathIdentifier;
@property (readonly, nonatomic) BKSHIDEventDeferringSelectionTarget *selectionTarget;
@property (readonly, nonatomic) BKSHIDEventDeferringModality *modality;
@property (readonly, nonatomic) BKSHIDEventDeferringChangeBasis *basis;
@property (readonly, nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)build:(id /* block */)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToStream:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
