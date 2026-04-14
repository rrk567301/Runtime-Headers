@class NSString;

@interface SKTaskRawParser : NSObject <SKTaskDataParser>

@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)parseData:(id)a0;

@end
