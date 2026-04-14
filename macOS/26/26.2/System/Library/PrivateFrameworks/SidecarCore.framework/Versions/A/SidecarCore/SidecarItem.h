@class NSData, NSString, UTType;

@interface SidecarItem : NSObject

@property (readonly) UTType *uniformType;
@property (readonly, copy) id objectValue;
@property (readonly) NSData *data;
@property (readonly) NSString *type;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (BOOL)conformsToType:(id)a0;
- (id)initWithData:(id)a0 type:(id)a1;
- (id)initWithObject:(id)a0 type:(id)a1;

@end
