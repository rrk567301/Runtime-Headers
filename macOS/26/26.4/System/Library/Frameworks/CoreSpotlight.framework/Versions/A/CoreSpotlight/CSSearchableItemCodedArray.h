@class NSString, CSDecoder;

@interface CSSearchableItemCodedArray : NSArray {
    unsigned long long _addCount;
    unsigned long long _updateCount;
    BOOL _counted;
}

@property (readonly, nonatomic) struct { char *containerBytes; unsigned long long containerLength; struct { unsigned int embeddedReference; unsigned char type; } reference; } obj;
@property (readonly, nonatomic) CSDecoder *items;
@property (readonly, nonatomic) CSDecoder *itemsContent;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *protectionClass;

- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)updateCount;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)addCount;
- (unsigned long long)count;
- (id)initWithItems:(id)a0 itemsContent:(id)a1;
- (void)countItems;

@end
