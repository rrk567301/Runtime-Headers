@class ASKDataRow;

@interface ASKDataCell : NSObject <NSCopying> {
    ASKDataRow *_dataRow;
    id _name;
    id _objectValue;
}

+ (id)cellForRow:(id)a0 withName:(id)a1 andValue:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)setName:(id)a0;
- (id)objectSpecifier;
- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (void)setContent:(id)a0;
- (id)content;
- (id)dataItem;
- (unsigned long long)objectIndex_ask;
- (id)initForRow:(id)a0 withName:(id)a1 andValue:(id)a2;
- (id)dataRow;
- (void)setDataRow:(id)a0;
- (void)setDataItem:(id)a0;

@end
