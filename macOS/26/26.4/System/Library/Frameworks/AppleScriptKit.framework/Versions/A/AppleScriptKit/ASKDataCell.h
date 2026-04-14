@class ASKDataRow;

@interface ASKDataCell : NSObject <NSCopying> {
    ASKDataRow *_dataRow;
    id _name;
    id _objectValue;
}

+ (id)cellForRow:(id)a0 withName:(id)a1 andValue:(id)a2;

- (id)content;
- (id)name;
- (void)setObjectValue:(id)a0;
- (void)setContent:(id)a0;
- (id)objectValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (id)init;
- (void)dealloc;
- (id)objectSpecifier;
- (id)dataRow;
- (unsigned long long)objectIndex_ask;
- (id)dataItem;
- (id)initForRow:(id)a0 withName:(id)a1 andValue:(id)a2;
- (void)setDataItem:(id)a0;
- (void)setDataRow:(id)a0;

@end
