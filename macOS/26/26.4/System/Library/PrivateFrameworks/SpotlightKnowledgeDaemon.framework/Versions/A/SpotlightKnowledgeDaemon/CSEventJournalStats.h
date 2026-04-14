@interface CSEventJournalStats : NSObject

+ (BOOL)enumerateEventsWithJournalPath:(id)a0 protectionClasses:(id)a1 itemAdds:(id /* block */)a2 itemUpdates:(id /* block */)a3 itemDeletes:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (BOOL)enumerateEventsWithProtectionClasses:(id)a0 itemAdds:(id /* block */)a1 itemUpdates:(id /* block */)a2 itemDeletes:(id /* block */)a3 cancelBlock:(id /* block */)a4;
+ (BOOL)enumerateEventsWithProtectionClasses:(id)a0 updaters:(id)a1 itemAdds:(id /* block */)a2 itemUpdates:(id /* block */)a3 itemDeletes:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (id)generateStats;

@end
