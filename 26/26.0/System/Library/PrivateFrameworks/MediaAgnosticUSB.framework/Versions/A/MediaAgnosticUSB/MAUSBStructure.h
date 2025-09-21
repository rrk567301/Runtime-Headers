@class NSMutableData, NSObject;
@protocol OS_os_log;

@interface MAUSBStructure : NSObject <NSCopying> {
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSMutableData *data;
@property (readonly) unsigned short structureLength;

- (id)initWithData:(id)a0;
- (BOOL)validate;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)log;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBuffer:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;

@end
