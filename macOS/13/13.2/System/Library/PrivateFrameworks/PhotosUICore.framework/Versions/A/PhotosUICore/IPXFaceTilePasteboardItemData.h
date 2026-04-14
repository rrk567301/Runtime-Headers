@class PHPerson;

@interface IPXFaceTilePasteboardItemData : PXPasteboardItemData

@property (readonly, nonatomic) PHPerson *person;

- (id)types;
- (void).cxx_destruct;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (id)initWithPerson:(id)a0;

@end
