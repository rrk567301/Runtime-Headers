@class NSData, NSString;

@interface SidecarItem : NSObject

@property (readonly, copy) id objectValue;
@property (readonly) NSData *data;
@property (readonly) NSString *type;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)conformsToType:(id)a0;
- (id)initWithData:(id)a0 type:(id)a1;
- (id)initWithObject:(id)a0 type:(id)a1;

@end
