@class NSString, NSAttributedString, NSDate;

@interface IMServicePlugInMessage : NSObject <NSCoding, NSCopying> {
    struct _IMServicePlugInMessageInternal { id x0; id x1; id x2; } *_internal;
}

@property (readonly) NSString *guid;
@property (copy, nonatomic) NSAttributedString *content;
@property (copy, nonatomic) NSDate *date;

+ (id)servicePlugInMessageWithContent:(id)a0;
+ (id)servicePlugInMessageWithContent:(id)a0 date:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContent:(id)a0;
- (id)_initWithInternal:(struct _IMServicePlugInMessageInternal { id x0; id x1; id x2; } *)a0;
- (void)setGuid:(id)a0;
- (id)_initWithGUID:(id)a0 content:(id)a1 date:(id)a2;
- (id)initWithContent:(id)a0 date:(id)a1;

@end
