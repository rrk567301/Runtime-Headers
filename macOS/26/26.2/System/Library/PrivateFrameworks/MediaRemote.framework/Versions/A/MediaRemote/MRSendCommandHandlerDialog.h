@class NSString, _MRSendCommandResultHandlerDialogProtobuf, NSArray, NSMutableArray;

@interface MRSendCommandHandlerDialog : NSObject <NSCopying> {
    NSMutableArray *_mutableActions;
}

@property (readonly, copy, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *protobuf;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedMessage;
@property (readonly, nonatomic) NSArray *actions;

+ (id)dialogWithTitle:(id)a0 message:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAction:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProtobuf:(id)a0;
- (id)initWithTitle:(id)a0 message:(id)a1;

@end
