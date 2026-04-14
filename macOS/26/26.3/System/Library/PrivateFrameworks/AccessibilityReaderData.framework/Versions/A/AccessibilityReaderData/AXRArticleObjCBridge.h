@class NSString, NSAttributedString;

@interface AXRArticleObjCBridge : NSObject

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) id windowElement;
@property (retain, nonatomic) id topElement;
@property (retain, nonatomic) id bottomElement;
@property (retain, nonatomic) id pageElement;

- (void).cxx_destruct;
- (id)initWithApplicationName:(id)a0 identifier:(id)a1 title:(id)a2 content:(id)a3 windowElement:(id)a4 topElement:(id)a5 bottomElement:(id)a6 pageElement:(id)a7;

@end
