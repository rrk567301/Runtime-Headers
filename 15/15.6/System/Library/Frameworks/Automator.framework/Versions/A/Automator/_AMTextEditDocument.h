@class _AMTextEditText, NSString;

@interface _AMTextEditDocument : _AMTextEditItem

@property (copy) _AMTextEditText *text;
@property (readonly) char modified;
@property (copy) NSString *name;
@property (copy) NSString *path;

@end
