@class NSMutableData, NSObject;
@protocol OS_os_log;

@interface MAUSBStructure : NSObject <NSCopying> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSMutableData *data;
@property (readonly) unsigned short structureLength;

- (id)debugDescription;
- (BOOL)validate;
- (id)log;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
