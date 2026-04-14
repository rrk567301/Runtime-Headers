@class NSString;

@interface PXPhotosConcreteSelectableItem : NSObject {
    void /* unknown type, empty encoding */ item;
}

@property (nonatomic, readonly) NSString *selectionIdentifier;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithSelectionIdentifier:(id)a0;

@end
