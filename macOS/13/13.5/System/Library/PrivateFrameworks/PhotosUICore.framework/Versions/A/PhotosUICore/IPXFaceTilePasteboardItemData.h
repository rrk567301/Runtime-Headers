@class PHPerson;

@interface IPXFaceTilePasteboardItemData : PXPasteboardItemData

@property (readonly, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (id)types;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (id)initWithPerson:(id)a0;

@end
