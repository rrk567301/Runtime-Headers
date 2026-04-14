@class NSArray;

@interface CCIndexedFieldConfiguration : NSObject

@property (readonly, nonatomic) unsigned short fieldType;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) unsigned char indexedFieldType;
@property (readonly, nonatomic) NSArray *descriptorAllowList;

- (void).cxx_destruct;
- (id)initWithFieldType:(unsigned short)a0 dataType:(unsigned char)a1 descriptorAllowList:(id)a2;
- (id)initWithFieldType:(unsigned short)a0 dataType:(unsigned char)a1 indexedFieldType:(unsigned char)a2 descriptorAllowList:(id)a3;

@end
