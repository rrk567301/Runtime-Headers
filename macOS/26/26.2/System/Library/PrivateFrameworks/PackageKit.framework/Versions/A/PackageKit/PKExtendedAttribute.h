@class NSString, NSData;

@interface PKExtendedAttribute : NSObject

@property (copy) NSString *name;
@property (copy) NSData *value;

- (id)description;
- (id)initWithName:(id)a0 value:(id)a1;
- (void)dealloc;
- (BOOL)setOnFileAtPath:(id)a0 option:(int)a1;

@end
