@class ASKDataRow;

@interface ASKDataCell : NSObject <NSCopying> {
    ASKDataRow *_dataRow;
    id _name;
    id _objectValue;
}

+ (id)cellForRow:(id)a0 withName:(id)a1 andValue:(id)a2;

- (void)dealloc;
- (id)name;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)objectSpecifier;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (id)content;
- (void)setContent:(id)a0;
- (id)dataItem;
- (unsigned long long)objectIndex_ask;
- (id)initForRow:(id)a0 withName:(id)a1 andValue:(id)a2;
- (id)dataRow;
- (void)setDataRow:(id)a0;
- (void)setDataItem:(id)a0;

@end
