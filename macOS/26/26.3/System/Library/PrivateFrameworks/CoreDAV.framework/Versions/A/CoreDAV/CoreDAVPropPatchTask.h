@class NSSet, NSURL, CoreDAVResponseItem;
@protocol CoreDAVPropPatchTaskDelegate;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {
    BOOL _sendOrder;
}

@property (retain, nonatomic) NSSet *propPatchRemoveElements;
@property (retain, nonatomic) NSSet *propPatchSetElements;
@property (retain, nonatomic) CoreDAVResponseItem *responseItem;
@property (weak, nonatomic) id<CoreDAVPropPatchTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (id)additionalHeaderValues;
- (id)requestBody;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)httpMethod;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertiesToSet:(id)a0 andRemove:(id)a1 atURL:(id)a2;

@end
