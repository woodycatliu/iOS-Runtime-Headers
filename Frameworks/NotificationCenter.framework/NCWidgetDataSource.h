/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NotificationCenter.framework/NotificationCenter
 */

@interface NCWidgetDataSource : NSObject <NCDataSource, _NCDataSource> {
    _NCConcreteDataSource * _concreteDataSource;
    NSString * _dataSourceIdentifier;
}

@property (getter=_concreteDataSource, setter=_setConcreteDataSource:, nonatomic, retain) _NCConcreteDataSource *concreteDataSource;
@property (nonatomic, readonly) NSString *dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *parentDataSourceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *widgetIdentifiers;

- (void).cxx_destruct;
- (id)_concreteDataSource;
- (void)_setConcreteDataSource:(id)arg1;
- (void)addWidgetObserver:(id)arg1 completion:(id /* block */)arg2;
- (id)dataSourceIdentifier;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)parentDataSourceIdentifier;
- (void)removeDatumWithIdentifier:(id)arg1;
- (void)removeWidgetObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)replaceWithDatum:(id)arg1;
- (id)widgetDatumWithIdentifier:(id)arg1;
- (id)widgetIdentifiers;

@end