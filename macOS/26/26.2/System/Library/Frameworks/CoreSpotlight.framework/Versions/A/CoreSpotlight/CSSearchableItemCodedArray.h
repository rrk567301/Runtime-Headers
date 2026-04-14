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

- (unsigned long long)count;
- (unsigned long long)updateCount;
- (unsigned long long)addCount;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 itemsContent:(id)a1;
- (void)countItems;

@end
