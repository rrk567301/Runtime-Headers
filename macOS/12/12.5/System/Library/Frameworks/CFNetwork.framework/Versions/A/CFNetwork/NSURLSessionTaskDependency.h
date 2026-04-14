@class NSURLSessionTaskDependencyDescription, NSURLSessionTask;

@interface NSURLSessionTaskDependency : NSObject

@property (retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription;
@property (readonly, retain, nonatomic) NSURLSessionTask *parentTask;
@property (readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask;

+ (id)taskDependencyWithParentTask:(id)a0 priority:(float)a1 exclusive:(BOOL)a2;
+ (id)taskDependencyWithMainDocumentTask:(id)a0;
+ (id)taskDependencyWithMainDocumentTask:(id)a0 taskDependencyDescription:(id)a1;

- (void)dealloc;
- (id)init;

@end
