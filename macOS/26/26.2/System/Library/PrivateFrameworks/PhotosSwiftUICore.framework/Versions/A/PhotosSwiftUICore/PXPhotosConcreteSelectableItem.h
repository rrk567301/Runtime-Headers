@class NSString;

@interface PXPhotosConcreteSelectableItem : NSObject {
    void /* unknown type, empty encoding */ item;
}

@property (nonatomic, readonly) NSString *selectionIdentifier;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSelectionIdentifier:(id)a0;

@end
